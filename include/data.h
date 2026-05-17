/*
 * data.h
 * Header file for the Data layer.
 * Defines the core structures and data access functions.
 */
#ifndef DATA_H
#define DATA_H

#include <string>
#include <vector>

// Structure holding a single quiz question
struct Question {
    int id;
    std::string category;
    std::string text;
    std::string answers[4];
    int correctIndex;
};

// Structure holding a player's result
struct QuizResult {
    std::string playerName;
    std::string category;
    int score;
};

// Function prototypes for data access
std::vector<Question> fetchAllQuestions();
std::vector<QuizResult> fetchAllResults();
void saveResultToDatabase(const QuizResult& result);

#endif