#include "Point.h"

#ifndef WEAVE_KERNEL_H
#define WEAVE_KERNEL_H

const int SAMPLE_GRID_SIZE = 8;

__global__ void dev_drawLine(float* d_weaveBlock, 
    float* d_currentImage,
    Point* d_points,
    int currentPoint,
    int pointCount,
    int resolution,
    float lineThickness);

__global__ void dev_calculateLoss(float* d_weaveBlock, 
    int* d_connectionMatrix,
    float* d_targetImage,
    float* d_scores,
    float* d_gausianKernel,
    int kernelSize,
    int currentPoint,
    int pointCount,
    int resolution);

#endif