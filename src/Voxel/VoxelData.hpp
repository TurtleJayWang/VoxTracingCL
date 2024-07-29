#pragma once

#include <CL/opencl.h>
#include <vector>

typedef unsigned long long NonLeafDataT;

struct LeafDataT
{
    float r, g, b, a;
};

class VoxelTree
{
public:

    VoxelTree();

private:
};
