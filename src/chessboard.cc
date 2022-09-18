#include "../include/chessboard.h"

ChessBoard::ChessBoard() {
	
}

ChessBoard::~ChessBoard() {

}

bool ChessBoard::modifyBoard(int index, Lattice type) {
	if (m_chessboard[index] != BLANK) return false;
	else {
		m_chessboard[index] = type;
		return true;
	}
}
