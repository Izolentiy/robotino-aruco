#pragma once
#include <opencv2/opencv.hpp>

#define ESTIMATE_POSE false
#define CAMERA_INDEX 1
#define CAMERA_DELAY 5
#define MARKER_LENGTH 0.1766f
#define PROGRAM_NAME "Summer practice"
#define ESCAPE_KEY 27

void processCameraImage();
cv::Point2f getCoordinatesFromImage();
float getAngleFromImage();