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



#include <ATen/ops/arctanh_ops.h>

namespace at {


// aten::arctanh(Tensor self) -> Tensor
inline at::Tensor arctanh(const at::Tensor & self) {
    return at::_ops::arctanh::call(self);
}

// aten::arctanh_(Tensor(a!) self) -> Tensor(a!)
inline at::Tensor & arctanh_(at::Tensor & self) {
    return at::_ops::arctanh_::call(self);
}

// aten::arctanh.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & arctanh_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::arctanh_out::call(self, out);
}

// aten::arctanh.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & arctanh_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::arctanh_out::call(self, out);
}

}
