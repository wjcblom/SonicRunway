//
//  BeatPattern.hpp
//  SonicRunway
//
//  Created by Rob Jensen on 5/7/16.
//
//

#ifndef SR_BEAT_PATTERN_HPP
#define SR_BEAT_PATTERN_HPP

#include "ScrollingPattern.hpp"

//
// SrBeatPattern draws the beat
//
class SrBeatPattern : public SrScrollingPattern {
public:
    SrBeatPattern(const std::string & name,
                     SrModel * model, SrAudio * audio);
    virtual ~SrBeatPattern();
    
protected:
    virtual void _DrawCurrentGate(std::vector<ofColor> * buffer) const;
    
    virtual void _Update();
    
private:
    ofParameter<float> _hueParam;
    ofParameter<float> _decayTimeParam;
    ofParameter<float> _spinSpeedParam;
    ofParameter<float> _hueSpeedParam;
    
    float _spinOffset;
    float _hueOffset;
};

#endif
