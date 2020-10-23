/*
	Seth Kith
	TicTacToe source file
*/


#include "TicTacToe.h"

	TicTacToe::TicTacToe() : WINNER_X(9), WINNER_O(-9) {
		
	}
	
	int TicTacToe::getPlayer1() {
		return(player1);
	}

	int TicTacToe::getPlayer2() {
		return(player2);
	}

	int TicTacToe::getCurrentPlayer() {
		return(currentPlayer);
	}

	void TicTacToe::setPlayer() {
		
	}

	void TicTacToe::checkWin() {
		int sum = 0;
		bool winner = false;
		for (int r = 0; r < ROW; r++) {
			sum = 0;
			for (int c = 0; c < COL; c++) {
				
			}
			if (sum == WINNER_X) {
				win = true;
			}
			if (sum == WINNER_X) {
				win = true;
			}
		}
	
	}

	const int TicTacToe::getROW() {
		return (ROW);
	}

	const int TicTacToe::getCOL() {
		return (COL);
	}

