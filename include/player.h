/* *********************
 * @Author Z.Zhang
 * @CreateTime 2022/9/18
 * *********************/

#ifndef PLAYER_H
#define PLAYER_H


#include <string>
#include <vector>

using std::string;
using std::vector;

enum Status {
	OFFLINE = 0,
	ONLINE = 1,
	GAMING = 2
};

class Player {
public:
	void showBoard(const vector<int8_t> &chessboard);

private:
	string player_name;
	Status status;
};

#endif