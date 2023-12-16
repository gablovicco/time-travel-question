#include <iostream>
#include <vector>
using namespace std;
int solution(vector<int> years)
 {
    int timeneeded = 0;

for(int i = 1; i < years.size(); i++){

    if(years[i-1] < years[i]){
        timeneeded += 1;
    }else if (years[i-1] > years[i]){
        timeneeded += 2;

    }else;

}
cout << timeneeded << endl;
return timeneeded;

}
int main(){
    vector<int> example ;
    cout <<"Enter the number of integers: ";
    int n;
    cin >> n;
    cout << "Enter " << n << " integers, separated by spaces:\n";
    for (int i = 0; i < n; i++){
    int num;
    cin >> num;
    example.push_back(num);
    }


    solution(example);
}
