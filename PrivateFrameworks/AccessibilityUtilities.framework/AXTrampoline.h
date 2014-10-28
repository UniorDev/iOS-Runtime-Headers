/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface AXTrampoline : NSObject {
    id _caller;
    Class _targetClass;
    BOOL _warnAboutUnknownSelectors;
}

@property id caller;
@property Class targetClass;
@property BOOL warnAboutUnknownSelectors;

+ (void)methodDoesNotExistSentinal;
+ (id)methodNotFoundSentinal;
+ (id)trampolineWithCaller:(id)arg1 targetClass:(Class)arg2;

- (int (*)())_findIMPForSelector:(SEL)arg1;
- (id)caller;
- (BOOL)callerIsClass;
- (void)dealloc;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)initWithCaller:(id)arg1 targetClass:(Class)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setCaller:(id)arg1;
- (void)setTargetClass:(Class)arg1;
- (void)setWarnAboutUnknownSelectors:(BOOL)arg1;
- (Class)targetClass;
- (BOOL)warnAboutUnknownSelectors;

@end