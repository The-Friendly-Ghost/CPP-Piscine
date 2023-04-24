/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/24 09:22:34 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/24 21:04:05 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <algorithm>
#include <limits.h>
#include <sys/time.h>

////////////////////////////////////////////////
// Constructors / Destructor
////////////////////////////////////////////////

PmergeMe::PmergeMe(char **argv)
{
    parseArgs(argv, mVector, mList);
}

PmergeMe::PmergeMe(const PmergeMe &copy) :
    mVector(copy.mVector),
    mList(copy.mList)
{
}


PmergeMe::~PmergeMe(void)
{
}

////////////////////////////////////////////////
// Assignment Operator
////////////////////////////////////////////////

PmergeMe    &PmergeMe::operator=(PmergeMe const &rhs)
{
    this->mList = rhs.mList;
    this->mVector = rhs.mVector;
    return (*this);
}

////////////////////////////////////////////////
// Other functions
////////////////////////////////////////////////

int	PmergeMe::convertArg(char *arg)
{
    for (int i = 0; arg[i]; i++)
    {
        if (!std::isdigit(arg[i]))
            throw (std::invalid_argument("Invalid character found"));
        else if (i >= 10)
            throw (std::invalid_argument("Only numbers within positive int range allowed"));
    }

    std::stringstream	ss(arg);
    long				ll;
    ss >> ll;
    if (ll > INT_MAX)
        throw (std::invalid_argument("Only numbers within positive int range allowed"));

    return (std::atoi(arg));
}

void	PmergeMe::parseArgs(char **argv, std::vector <int> &mVector, std::list<int> &mList)
{
    for (int i = 1; argv[i]; i++)
    {
        int num = convertArg(argv[i]);
        mVector.push_back(num);
        mList.push_back(num);
    }
}

////////////////////////////////////////////////
// Getters
////////////////////////////////////////////////

int PmergeMe::getVecSize(void) const
{
    return (this->mVector.size());
}

int PmergeMe::getListSize(void) const
{
    return (this->mList.size());
}

long PmergeMe::getVecSortTime(void)
{
    return (this->mTime[VECTOREND] - this->mTime[VECTORSTART]);
}

long PmergeMe::getListSortTime(void)
{
    return (this->mTime[LISTEND] - this->mTime[LISTSTART]);
}

std::list<int>  &PmergeMe::getList(void)
{
    return (this->mList);
}

////////////////////////////////////////////////
// Setters
////////////////////////////////////////////////

void    PmergeMe::setTime(int type)
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    this->mTime[type] = tv.tv_sec * (int)1e6 + tv.tv_usec;
}

////////////////////////////////////////////////
// Mergesort Vector functions
////////////////////////////////////////////////

void    PmergeMe::mergeSortVector(int low, int high)
{
    int mid;

    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSortVector(low, mid);
        mergeSortVector(mid + 1, high);
        mergeVector(low, high, mid);
    
    }
}

void    PmergeMe::mergeVector(int low, int high, int mid)
{
    int i = low;
    int k = low;
    int j = mid + 1;
    int temp[high];

    while (i <= mid && j <= high)
    {
        if (this->mVector[i] < this->mVector[j])
        {
            temp[k] = this->mVector[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = this->mVector[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        temp[k] = this->mVector[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        temp[k] = this->mVector[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        this->mVector[i] = temp[i];
    }
}


////////////////////////////////////////////////
// Mergesort List functions
////////////////////////////////////////////////

void    PmergeMe::mergeSortList(std::list<int>& input)
{
    if (input.size() <= 1)
        return;

    std::list<int> left;
    std::list<int> right;
    std::list<int> result;
    std::list<int>::iterator it = input.begin();

    for (std::size_t i = 0; i < input.size() / 2; ++i)
    {
        left.push_back(*it);
        it++;
    }

    for (std::size_t i = input.size() / 2; i < input.size(); ++i)
    {
        right.push_back(*it);
        it++;
    }

    mergeSortList(left);
    mergeSortList(right);

    mergeList(left, right, result);
    input.swap(result);
}

void    PmergeMe::mergeList(std::list<int> &left, std::list<int> &right, std::list<int> &result)
{
    std::list<int>::iterator left_it = left.begin();
    std::list<int>::iterator right_it = right.begin();

    while (left_it != left.end() && right_it != right.end())
    {
        if (*left_it < *right_it)
        {
            result.push_back(*left_it);
            ++left_it;
        }
        else
        {
            result.push_back(*right_it);
            ++right_it;
        }
    }

    result.insert(result.end(), left_it, left.end());
    result.insert(result.end(), right_it, right.end());
}

////////////////////////////////////////////////
// Other functions
////////////////////////////////////////////////

void    PmergeMe::printResult(void)
{
    std::cout << "After : ";

    // PRINT VECTOR
    int const   size = this->mVector.size();
    for (int i = 0; i < size; i++)
        std::cout << this->mVector[i] << " ";
    std::cout << std::endl;

    // PRINT LIST
    // std::list<int>::iterator it = this->mList.begin();
    // for (; it != this->mList.end(); it++)
    //     std::cout << *it << " ";
    // std::cout << std::endl;

    std::cout << "Time to precess a range of " << size;
    std::cout << " elements with std::vector : ";
    std::cout << this->getVecSortTime() << "μs" << std::endl;

    std::cout << "Time to precess a range of " << size;
    std::cout << " elements with std::list : ";
    std::cout << this->getListSortTime() << "μs" << std::endl;
}

void    PmergeMe::printBefore(void)
{
    int const   size = this->mVector.size();

    std::cout << "Before : ";
    for (int i = 0; i < size; i++)
        std::cout << this->mVector[i] << " ";
    std::cout << std::endl;
}
