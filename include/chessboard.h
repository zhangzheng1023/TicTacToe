/* *********************
 * @Author Z.Zhang
 * @CreateTime 2022/9/18
 * *********************/

#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <vector>

using std::vector;

enum Lattice {
	BLANK = 0,
	CROSS = 1,
	CIRCLE = 2
};

class ChessBoard {
public:
	ChessBoard();
	~ChessBoard();

	bool modifyBoard(int index, Lattice type);

private:
	vector<int8_t> m_chessboard;
};

#endif