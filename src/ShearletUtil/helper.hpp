#pragma once

#include <opencv2/opencv.hpp>
#include <vector>
#include <cmath> 
#include <iostream>

namespace Shearlet{

void gen_x_y_cordinates(int n, cv::Mat& x1n, cv::Mat& y1n, cv::Mat& x2n, cv::Mat& y2n, cv::Mat& D);

std::vector<double> linespace(double start, double end, int num_sample);

cv::Mat avg_pol(int L, const cv::Mat& x1, const cv::Mat& y1, const cv::Mat& x2, const cv::Mat& y2);

cv::Mat rec_from_pol(cv::Mat& l, int n, cv::Mat& x1, cv::Mat& y1, cv::Mat& x2, cv::Mat& y2, cv::Mat& D); 

cv::Mat windowing(cv::Mat x, const int L, const int c);

float meyer_wind(const float q);

void shearing_filters_Myer(std::vector<int>& m, std::vector<int>& num, const int L);

cv::Mat Mat_sqrt(cv::Mat input);

}

