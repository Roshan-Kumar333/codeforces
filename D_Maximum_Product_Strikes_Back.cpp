// #include<bits/stdc++.h>
// using namespace std;
// int countOfNegatives(int arr[],int n,int start,int end){
//     int count=0;
//     for(int i=start;i<=end;i++){
//         if(arr[i]<0){
//             count++;
//         }
//     }
//     return count;
// }
// bool isZero(int arr[],int n){
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             return true;
//         }
//     }
//     return false;
// }
// int posFromB(int arr[],int n){

// }
// int posFromE(int arr[],int n){
    
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int* arr = new int[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }

//     }
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int test_cases;
//     cin >> test_cases;
//     while(test_cases--){
//         int sizeOfArray;
//         cin >> sizeOfArray;
//         int *array = new int[sizeOfArray];
//         for (int i = 0; i < sizeOfArray;i++){
//             cin >> array[i];
//         }
//         sort(array, array + sizeOfArray);
//         int *temp = new int[sizeOfArray];
//         int index = 0;
//         int count = 1;
//         for (int i = 1; i < sizeOfArray;i++){
//             if(array[i]!=array[i-1]){
//                 temp[index] = count;
//                 count = 1;
//                 index++;
//             }
//             else{
//                 count++;
//             }
//         }
//         temp[index] = count;
//         sort(temp, temp + index + 1);
//         bool flag = true;
//         for (int i = 0; i <= index;i++){
//             cout << temp[i] << " ";
//         }
//         cout << endl;
//         for (int i = 1; i <= index; i++)
//         {
//             if (temp[i] == temp[i - 1])
//             {
//                 flag = false;
//                 break;
//             }
//             }
//         if(flag){
//             cout << "TRUE" << endl;
//         }
//         else{
//             cout << "FALSE" << endl;
//         }
//     }
//     return 0;
// }