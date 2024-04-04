#include <iostream>
#include <torch/torch.h>


int main() {
    torch::Tensor x = torch::randn({2,3});
    std:: cout << x << std::endl;
}