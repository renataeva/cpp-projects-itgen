#include <iostream>

using namespace std;

int main() {
    int JDG_NUM = 4;
    int CONT_NUM = 3;
    float first_cont[JDG_NUM];
    float scnd_cont[JDG_NUM];
    float third_cont[JDG_NUM];
    float average[CONT_NUM];
    float max_score = 0;
    int cont_num = 0;
    float temp = 0;

    cout << "Scores for the first contestant: " << endl << endl;
    for(int i = 0; i<JDG_NUM; i++){
        cout << "Judge " << i+1 << " average: " << endl;;
        cin >> temp;
        first_cont[i] = temp;
    }
    cout << endl;

    cout << "Scores for the second contestant: " << endl << endl;
    for(int i = 0; i<JDG_NUM; i++){
        cout << "Judge " << i+1 << " average: " << endl;;
        cin >> temp;
        scnd_cont[i] = temp;
    }
    cout << endl;

    cout << "Scores for the third contestant: " << endl << endl;
    for(int i = 0; i<JDG_NUM; i++){
        cout << "Judge " << i+1 << " average: " << endl;;
        cin >> temp;
        third_cont[i] = temp;
    }
    cout << endl;

    for(int i = 1; i<=CONT_NUM; i++){
        if(i == 1){
            for(int j = 0; j<JDG_NUM; j++){
                max_score += first_cont[j];  
            }
            max_score = max_score/JDG_NUM;
            average[i-1] = max_score;
            max_score = 0;
        }
        if(i == 2){
            for(int j = 0; j<JDG_NUM; j++){
                max_score += scnd_cont[j];
            }
            max_score = max_score/JDG_NUM;
            average[i-1] = max_score;
            max_score = 0;
        }
        if(i == CONT_NUM){
            for(int j = 0; j<JDG_NUM; j++){
                max_score += third_cont[j];
            }
            max_score = max_score/JDG_NUM;
            average[i-1] = max_score;
            max_score = 0;
        }
    }

    cout << endl;

    // max score finder
    for (int i = 0; i <= CONT_NUM-1; i++) {
        if(average[i] > max_score){
            max_score = average[i];
            cont_num = i+1;
            // cout << "New max score: " << max_score << endl;
        }
    }

    cout << "Athlete N°" << cont_num << " won with " << average[cont_num-1] << " points, congrautlations!";
}