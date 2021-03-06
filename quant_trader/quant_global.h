#ifndef QUANT_GLOBAL_H
#define QUANT_GLOBAL_H

#include "indicator/ma.h"
#include "indicator/macd.h"
#include "indicator/parabolicsar.h"
#include "indicator/bollinger_band.h"
#include "indicator/divergent_bar.h"
#include "indicator/awesome_oscillator.h"
#include "indicator/fractal.h"
#include "indicator/zen/segment.h"
#include "strategy/DblMaPsar_strategy.h"
#include "strategy/BigHit_strategy.h"
#include "strategy/chaos2.h"
#include "strategy/lemon1.h"

const QMap<QString, const QMetaObject*> indicatorMetaObjects = {
    {"MA", &MA::staticMetaObject},
    {"MACD", &Macd::staticMetaObject},
    {"ParabolicSAR", &ParabolicSAR::staticMetaObject},
    {"BollingerBand", &BollingerBand::staticMetaObject},
    {"AwesomeOscillator", &AwesomeOscillator::staticMetaObject},
    {"DivergentBar", &DivergentBar::staticMetaObject},
    {"Fractal", &Fractal::staticMetaObject},
    {"Segment", &Segment::staticMetaObject},
    // Register more indicators here
};

const QMap<QString, const QMetaObject*> strategyMetaObjects = {
    {"DblMaPsarStrategy", &DblMaPsarStrategy::staticMetaObject},
    {"BigHitStrategy", &BigHitStrategy::staticMetaObject},
    {"Chaos2", &Chaos2::staticMetaObject},
    {"Lemon1", &Lemon1::staticMetaObject},
    // Register more strategies here
};

#endif // QUANT_GLOBAL_H
