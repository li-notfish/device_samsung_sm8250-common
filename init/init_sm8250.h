#ifndef INIT_SEC_H
#define INIT_SEC_H

#include <string.h>

enum device_variant {
    VARIANT_X1Q = 0,
    VARIANT_X1S,
    VARIANT_MAX
};

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant international_models = {
    .model = "SM-G9810",
    .codename = "x1q"
};

static const variant international_models_x1s = {
    .model = "SM-G981F",
    .codename = "x1s"
};

static const variant *all_variants[VARIANT_MAX] = {
    &international_models,
    &international_models_x1s,
};

#endif // INIT_SEC_H
