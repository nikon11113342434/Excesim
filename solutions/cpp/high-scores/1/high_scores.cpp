#include "high_scores.h"

#include <algorithm>

namespace arcade {

std::vector<int> HighScores::list_scores() {
    // TODO: Return all scores for this session.
    
    return scores;
}

int HighScores::latest_score() {
    // TODO: Return the latest score for this session.
    int a = scores.back();
    return a;
}

int HighScores::personal_best() {
    // TODO: Return the highest score for this session.
    int answer = 0;
    for(int v:scores){
        if (v>answer) answer = v;
    }
    return answer;
}

std::vector<int> HighScores::top_three() {
    // TODO: Return the top 3 scores for this session in descending order.
    std::vector<int> answers = scores;
    std::sort(answers.begin(),answers.end(),std::greater<int>{});
    if (answers.size()>3)
        answers.resize(3);
    return answers;
   
    }

}  // namespace arcade
