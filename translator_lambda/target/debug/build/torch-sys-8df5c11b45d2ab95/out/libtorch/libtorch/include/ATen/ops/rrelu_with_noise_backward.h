#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/rrelu_with_noise_backward_ops.h>

namespace at {


// aten::rrelu_with_noise_backward(Tensor grad_output, Tensor self, Tensor noise, Scalar lower, Scalar upper, bool training, bool self_is_result) -> Tensor
inline at::Tensor rrelu_with_noise_backward(const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & noise, const at::Scalar & lower, const at::Scalar & upper, bool training, bool self_is_result) {
    return at::_ops::rrelu_with_noise_backward::call(grad_output, self, noise, lower, upper, training, self_is_result);
}

// aten::rrelu_with_noise_backward.out(Tensor grad_output, Tensor self, Tensor noise, Scalar lower, Scalar upper, bool training, bool self_is_result, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & rrelu_with_noise_backward_out(at::Tensor & out, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & noise, const at::Scalar & lower, const at::Scalar & upper, bool training, bool self_is_result) {
    return at::_ops::rrelu_with_noise_backward_out::call(grad_output, self, noise, lower, upper, training, self_is_result, out);
}

// aten::rrelu_with_noise_backward.out(Tensor grad_output, Tensor self, Tensor noise, Scalar lower, Scalar upper, bool training, bool self_is_result, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & rrelu_with_noise_backward_outf(const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & noise, const at::Scalar & lower, const at::Scalar & upper, bool training, bool self_is_result, at::Tensor & out) {
    return at::_ops::rrelu_with_noise_backward_out::call(grad_output, self, noise, lower, upper, training, self_is_result, out);
}

}
