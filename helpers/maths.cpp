// This file includes some useful functions for vector maths.
// I could probably make a Vector class that has builtins for
// dot and cross products and whatnot, but quite frankly that
// just seems like more work than is necessary.


#include <bit>
#include <limits>
#include <cstdint>

constexpr float Q_rsqrt(float number) noexcept {
	static_assert(std::numeric_limits<float>::is_iec559);
	float const y = std::bit_cast<float>(0x5f3759df - (std::bit_cast<uint32_t>(number) >> 1));
	return y * (1.5f - (number * 0.5f * y * y));
}
