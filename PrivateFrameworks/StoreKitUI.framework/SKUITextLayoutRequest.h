/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSAttributedString, NSString;

@interface SKUITextLayoutRequest : NSObject <SKUILayoutRequest> {
    NSAttributedString *_attributedText;
    float _fontSize;
    int _fontWeight;
    int _numberOfLines;
    NSString *_text;
    unsigned char _textAlignment;
    float _width;
}

@property(copy) NSAttributedString * attributedText;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property float fontSize;
@property int fontWeight;
@property(readonly) unsigned int hash;
@property(readonly) Class layoutClass;
@property int numberOfLines;
@property(readonly) Class superclass;
@property(copy) NSString * text;
@property unsigned char textAlignment;
@property float width;

- (void).cxx_destruct;
- (id)attributedText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)fontSize;
- (int)fontWeight;
- (id)init;
- (Class)layoutClass;
- (int)numberOfLines;
- (void)setAttributedText:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void)setFontWeight:(int)arg1;
- (void)setNumberOfLines:(int)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(unsigned char)arg1;
- (void)setWidth:(float)arg1;
- (id)text;
- (unsigned char)textAlignment;
- (float)width;

@end