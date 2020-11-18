// Wave Print
// For a given two-dimensional integer array/list of size (N x M), print the array/list in a sine wave order,
// i.e, print the first column top to bottom, next column bottom to top and so on.

// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// 0 <= M <= 10^3

// Time Limit: 1sec

// Sample Input 1:
// 1
// 3 4 
// 1  2  3  4 
// 5  6  7  8 
// 9 10 11 12

// Sample Output 1:
// 1 5 9 10 6 2 3 7 11 12 8 4

void wavePrint(int input[][1000], int r, int c){
	
    for(int j=0; j<c; j++){
        if(j%2 == 0){
            //top to bottom
            for(int i=0; i<r; i++){
                cout<<input[i][j]<<" ";
            }
        }
    	else{
            //bottom to top
            for(int i=r-1; i>=0; i--){
                cout<<input[i][j]<<" ";
            }
        }
    }
}

int main(){
    int r,c;
    cin>>r>>c;
    int input[1000][1000];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>input[i][j];
        }
    }
    wavePrint(input, r, c);
}
