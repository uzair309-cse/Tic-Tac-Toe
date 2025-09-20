#include <iostream>
using namespace std;
int currentplayer;
char currentmarker;
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void drawboard(){
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " \n";
    cout << "---|---|---\n";
     cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " \n";
    cout << "---|---|---\n";
     cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " \n";
    
}

bool placemarker(int position){
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;

    if(board[row][col] != 'X' && board[row][col] != 'O'){
        board[row][col] = currentmarker;
        return true;
    }
    else{
        return false;
    }
}

int winner(){
    //rows
    for(int i = 0; i < 3; i++){
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2]){
            return currentplayer;
        }
    }

    //columns
    for(int i = 0; i < 3; i++){
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i]){
            return currentplayer;
        }
    }

    //diagonals
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        return currentplayer;
    }

    if(board[0][2] == board[1][1] && board[1][1] == board[2][0]){
        return currentplayer;
    }
    return 0;
}

void swapplayerandmarker(){
    if(currentmarker == 'X'){
        currentmarker = 'O';
    }
    else{
        currentmarker = 'X';
    }

    if(currentplayer == 1){
        currentplayer = 2;
    }else{
        currentplayer = 1;
    }
}

void game(){
    cout << "Player 1, choose your mark (X or O): ";
    char markerp1;
    cin >> markerp1;

    if (markerp1 == 'x' || markerp1 == 'X') {
        markerp1 = 'X';
    } else if (markerp1 == 'o' || markerp1 == 'O') {
        markerp1 = 'O';
    } else {
        cout << "Invalid marker, defaulting to X.\n";
        markerp1 = 'X';
    }


    currentplayer = 1;
    currentmarker = markerp1;

    drawboard();

    int playerwon = 0;
    for(int i = 0; i < 9; i++){
        cout << "Player " << currentplayer << ", choose your position: ";
        int position;
        cin >> position;
     
        if(position < 1 || position > 9){
            cout << "Invalid position, try again.\n";
            i--;
            continue;
        }
        if(!placemarker(position)){
            cout << "Position already taken, try again.\n";
            i--;
            continue;
        }
        drawboard() ;

        playerwon = winner();

        if(playerwon == 1){
            cout << "Player 1 won!\n";
            break;
        }
        else if(playerwon == 2){
            cout << "Player 2 won!\n";
            break;
        }

        swapplayerandmarker();
    }

    if(playerwon == 0){
        cout << "It's a Tie!\n";
    }
}

int main(){
    game();
    return 0;
}