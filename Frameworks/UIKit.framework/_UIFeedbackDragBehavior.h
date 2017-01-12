/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFeedbackDragBehavior : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven> {
    _UIFeedback<_UIFeedbackContinuousPlayable> * _playingContinuousFeedback;
    int  _state;
}

@property (getter=_dragConfiguration, nonatomic, readonly) _UIFeedbackDragBehaviorConfiguration *dragConfiguration;
@property (getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:, nonatomic, retain) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback;
@property (getter=_state, setter=_setState:, nonatomic) int state;

+ (Class)_configurationClass;
+ (id)dragBehaviorWithCoordinateSpace:(id)arg1 configuration:(id)arg2;
+ (id)dragBehaviorWithStyle:(int)arg1 coordinateSpace:(id)arg2;
+ (id)retargetBehaviorWithStyle:(int)arg1 coordinateSpace:(id)arg2;

- (void).cxx_destruct;
- (id)_dragConfiguration;
- (id)_playingContinuousFeedback;
- (void)_setPlayingContinuousFeedback:(id)arg1;
- (void)_setState:(int)arg1;
- (void)_startPlayingContinuousFeedback;
- (void)_startPlayingContinuousFeedbackNow;
- (int)_state;
- (id)_stats_key;
- (void)_stopPlayingContinuousFeedback;
- (void)dropTargetUpdated;
- (void)positionUpdated;
- (void)snappedToFinalPosition;
- (void)targetUpdated;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;

@end