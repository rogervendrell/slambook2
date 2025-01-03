#include <iostream>
#include <ctime>
#include <Eigen/Core>
#include <Eigen/Dense>


#define MATRIX_SIZE 50

int main(int argc, char **argv) {
  // Eigen::Matrix<float, 2, 3> matrix_23;
  // matrix_23 << 2, 2, 3, 8, 6, 9;
  // Eigen::Matrix<float, 3, 2> matrix_32;
  // matrix_32 << 1, 4, 5, 4, 1, 9;

  // std::cout << matrix_23*matrix_32 << std::endl;

  // std::cout << "Print de la matriu:" << std::endl;
  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     std::cout << matrix_23(i, j) << "\t";
  //   }
  //   std::cout << std::endl;
  // }

  Eigen::Matrix<double, 3, 3> matrix_33;
  matrix_33 = Eigen::Matrix3d::Random(); // Random Number Matrix
  std::cout << "random matrix: \n" << matrix_33 << std::endl;
  std::cout << "transpose: \n" << matrix_33.transpose() << std::endl;
  std::cout << "sum: " << matrix_33.sum() << std::endl;
  std::cout << "trace: " << matrix_33.trace() << std::endl;
  std::cout << "times 10: \n" << 10 * matrix_33 << std::endl;
  std::cout << "inverse: \n" << matrix_33.inverse() << std::endl;
  std::cout << "det: " << matrix_33.determinant() << std::endl;
    
  Eigen::SelfAdjointEigenSolver<Eigen::Matrix3d> eigen_solver(matrix_33.transpose() * matrix_33);
  std::cout << "Eigen values = \n" << eigen_solver.eigenvalues() << std::endl;
  std::cout << "Eigen vectors = \n" << eigen_solver.eigenvectors() << std::endl;


  return 0;
}