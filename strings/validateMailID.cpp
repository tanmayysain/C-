#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Course {
    int time;
    int trainingIndex;
};

struct Training {
    int totalTime;
    vector<Course> courses;
};

bool compareCourses(const Course& c1, const Course& c2) {
    return c1.time < c2.time;
}

int main() {
    int N, M, K, P;
    cin >> N >> M >> K >> P;

    vector<Training> trainings(N);

    // Input the time required for each course in each training
    for (int i = 0; i < N; ++i) {
        trainings[i].courses.resize(M);
        trainings[i].totalTime = 0;
        for (int j = 0; j < M; ++j) {
            cin >> trainings[i].courses[j].time;
            trainings[i].courses[j].trainingIndex = i;
            trainings[i].totalTime += trainings[i].courses[j].time;
        }
    }

    // Sort the courses in ascending order of time
    for (int i = 0; i < N; ++i) {
        sort(trainings[i].courses.begin(), trainings[i].courses.end(), compareCourses);
    }

    // Sort the trainings in ascending order of total time
    sort(trainings.begin(), trainings.end(), [](const Training& t1, const Training& t2) {
        return t1.totalTime < t2.totalTime;
    });

    // Calculate the minimum time required for Alice to complete all trainings
    int minTime = 0;
    int remainingDays = K;

    for (int i = 0; i < N; ++i) {
        if (remainingDays <= 0) break;

        int trainingTime = trainings[i].totalTime;
        int coursesCompleted = 0;

        // Check if Alice has enough time to complete the training
        if (trainingTime <= remainingDays * P) {
            minTime = max(minTime, trainingTime);
            remainingDays -= 1;
            coursesCompleted = M;
        } else {
            // Calculate the number of courses Alice can complete in the remaining time
            int totalTime = 0;
            for (int j = 0; j < M; ++j) {
                totalTime += trainings[i].courses[j].time;
                if (totalTime <= remainingDays * P) {
                    coursesCompleted += 1;
                } else {
                    break;
                }
            }
        }

        minTime = max(minTime, trainings[i].courses[coursesCompleted - 1].time);
    }

    cout << minTime << endl;

    return 0;
}