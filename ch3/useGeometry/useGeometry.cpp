#include <iostream>
#include <cmath>
#include <Eigen/Core>
#include <Eigen/Geometry>

int main(int argc, char **argv) {
    Eigen::Matrix3d rotation_matrix = Eigen::Matrix3d::Identity();
    Eigen::AngleAxisd rotation_vector(M_PI/4, Eigen::Vector3d(0,0,1));
    std::cout.precision(5);
    std::cout << "rotation matrix = \n" << rotation_vector.matrix() << std::endl;
}
