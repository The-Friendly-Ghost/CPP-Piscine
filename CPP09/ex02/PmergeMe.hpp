/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/24 09:22:40 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/24 20:53:51 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <list>
#include <vector>
#include <array>

#define VECTORSTART 0
#define VECTOREND 1
#define LISTSTART 2
#define LISTEND 3

class PmergeMe
{
private:
    std::array<long, 4>     mTime;
    std::vector<int>        mVector;
    std::list<int>          mList;

    PmergeMe(void);
    void    parseArgs(char **argv, std::vector <int> &mVector, std::list<int> &mList);
    int     convertArg(char *arg);

public:
    PmergeMe(char **argv);
    PmergeMe(PmergeMe const &copy);
    ~PmergeMe(void);

    PmergeMe    &operator=(PmergeMe const &rhs);

    int     getVecSize(void) const;
    void    mergeSortVector(int low, int high);
    void    mergeVector(int low, int high, int mid);

    int             getListSize(void) const;
    void            mergeSortList(std::list<int>& input);
    void            mergeList(std::list<int> &left, std::list<int> &right, std::list<int> &result);
    std::list<int>  &getList(void);
    
    void    printResult(void);
    void    printBefore(void);

    void    setTime(int type);
    long    getVecSortTime(void);
    long    getListSortTime(void);
};

#endif
