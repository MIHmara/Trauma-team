/*
 * logic.h
 * Header file for the Logic layer.
 * Contains algorithms and rules.
 */
#ifndef LOGIC_H
#define LOGIC_H

#include "data.h"
#include <string>
#include <vector>

// Filtering and Searching Algorithms
std::vector<Question> getQuestionsByCategory(const std::string& category);
std::vector<Question> searchQuestionsByKeyword(const std::string& keyword);

// Sorting Algorithm
void sortResultsDescending(std::vector<QuizResult>& results);

// Recursive Algorithm
int calculateTotalScoreRecursive(const std::vector<QuizResult>& results, int index);

// Business Logic
void processQuizCompletion(const std::string& playerName, const std::string& category, int score);
std::vector<QuizResult> getLeaderboard();

#endif