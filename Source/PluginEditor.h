/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Pfm_project_0AudioProcessorEditor  : public AudioProcessorEditor
{
public:
    Pfm_project_0AudioProcessorEditor (Pfm_project_0AudioProcessor&);
    ~Pfm_project_0AudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Pfm_project_0AudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Pfm_project_0AudioProcessorEditor)
};
