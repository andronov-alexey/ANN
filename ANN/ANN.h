#ifndef ANN_H
#define ANN_H

#include "matrix.h"
#include <vector>
#include <algorithm>

using namespace std;


class ANN
{
	friend class FileReader;
public:
	ANN();
	void FeedForward();
	~ANN();
private:
	unique_ptr<FileReader> fr;
	// Weights of each layer
	vector<QSMatrix<double>> weights_m;
	vector<double> input;
	vector<double> desired_output;
	vector<vector<double>> output;
};

#endif