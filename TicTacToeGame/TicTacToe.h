/*

	Seth Kith
	TicTacToe.h declaration file

*/

#include "Cell.h"
#include "Player.h"

class TicTacToe {

	//Public methods
	public:
		game();

		int getPlayer1();
		int getPlayer2();
		int getCurrentPlayer();
		void setPlayer();
	
		void displayBoard();
		void makeMove();
		void checkWin();

		static const getROW();
		static const getCOL();

	//Private variables and method	
	private:
		const int ROW = 3;
		const int COL = 3;
		const int player1;
		const int player2;
		const int playerWin1;
		const int playerWin2; 

		Cell gameBoard[3][3];
		Players players[2];
		int currentPlayer;

}
