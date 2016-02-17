#include "connect4_engine.h"
int main(){
return 0;
}
int check_horizontal(int num_rows, int num_columns, int length_to_win, int array[num_rows][num_columns]){
	for(int i = 0; i < num_rows; ++i){
		int count = 0;
		int player = -1;
		for(int j = 0; j < num_columns; ++j){
			if(array[i][j] == -1){
				player = -1;
			}
			else if(count == 0){
				player = array[i][j];
				count = 1;
			}
			else if(array[i][j] == player){
				count = ++count;
			}
			else{
				count = 1;
				player = array[i][j];
			}
			if(count == length_to_win){
                return 1;
			}

		}
	}
	return 0;
}

int check_vertical(int num_columns, int num_rows, int length_to_win, int array[num_rows][num_columns]){
    return 0;
}

int check_diagonal(int num_columns, int num_rows, int length_to_win, int array[num_rows][num_columns]){
    return 0;
}



int place_token(int player, int column, int num_rows, int num_columns, int board[num_rows][num_columns]){
	if(board[0][column] != -1){
		return -1;
	}
	for(int i = num_rows; i > 0; --i){
		if(board[i][column] == -1){
			board[i][column] = player;
		}
	}

}

int winner(int num_rows, int num_columns, int length_to_win, int array[num_rows][num_columns]){
	if(num_rows == 0 || num_columns == 0){

	}
}
