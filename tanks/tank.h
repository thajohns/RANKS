#ifndef TANK_H
#define TANK_H 1

#include <stdint.h>

extern int32_t SHOOT_HEAT();
extern int32_t IDLE_HEAT();
extern int32_t MOVE_HEAT();
extern int32_t DEATH_HEAT();
extern uint64_t INSTRS_PER_STEP();
extern float BULLET_VELOCITY();
extern float BULLET_SPACING();
extern float TANK_HIT_RADIUS();
extern float TANK_VELOCITY();
extern float EXPLOSION_RADIUS();

// See the Rust standard library for details on each of these.
extern float abs_float(float);
extern float acos_float(float);
extern float acosh_float(float);
extern float asin_float(float);
extern float asinh_float(float);
extern float atan_float(float);
extern float atanh_float(float);
extern float cbrt_float(float);
extern float ceil_float(float);
extern float cos_float(float);
extern float cosh_float(float);
extern float exp_float(float);
extern float exp2_float(float);
extern float expm1_float(float);
extern float floor_float(float);
extern float fract_float(float);
extern float ln_float(float);
extern float ln1p_float(float);
extern float log10_float(float);
extern float log2_float(float);
extern float recip_float(float);
extern float round_float(float);
extern float signum_float(float);
extern float sin_float(float);
extern float sinh_float(float);
extern float sqrt_float(float);
extern float tan_float(float);
extern float tanh_float(float);
extern float trunc_float(float);

extern float atan2_float(float, float);
extern float copysign_float(float, float);
extern float div_euclid_float(float, float);
extern float hypot_float(float, float);
extern float log_float(float, float);
extern float max_float(float, float);
extern float min_float(float, float);
extern float powf_float(float, float);
extern float rem_euclid_float(float, float);

extern double abs_double(double);
extern double acos_double(double);
extern double acosh_double(double);
extern double asin_double(double);
extern double asinh_double(double);
extern double atan_double(double);
extern double atanh_double(double);
extern double cbrt_double(double);
extern double ceil_double(double);
extern double cos_double(double);
extern double cosh_double(double);
extern double exp_double(double);
extern double exp2_double(double);
extern double expm1_double(double);
extern double floor_double(double);
extern double fract_double(double);
extern double ln_double(double);
extern double ln1p_double(double);
extern double log10_double(double);
extern double log2_double(double);
extern double recip_double(double);
extern double round_double(double);
extern double signum_double(double);
extern double sin_double(double);
extern double sinh_double(double);
extern double sqrt_double(double);
extern double tan_double(double);
extern double tanh_double(double);
extern double trunc_double(double);

extern double atan2_double(double, double);
extern double copysign_double(double, double);
extern double div_euclid_double(double, double);
extern double hypot_double(double, double);
extern double log_double(double, double);
extern double max_double(double, double);
extern double min_double(double, double);
extern double powf_double(double, double);
extern double rem_euclid_double(double, double);

extern uint64_t scan(float, float);
extern void fire();
extern void aim(float);
extern void turn(float);
extern float gpsx();
extern float gpsy();
extern int32_t temp();
extern void forward();
extern void explode();
extern void post_string(char*);
extern void post_int32(int32_t);
extern void post_uint32(uint32_t);
extern void post_int64(int64_t);
extern void post_uint64(uint64_t);
extern void post_float(float);
extern void post_double(double);
extern void yield();

#endif
