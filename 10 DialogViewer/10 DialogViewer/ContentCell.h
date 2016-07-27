//
//  ContentCell.h
//  10 DialogViewer
//
//  Created by tomandhua on 16/7/13.
//  Copyright © 2016年 tomandhua. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ContentCell : UICollectionViewCell

@property (strong, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;

+ (CGSize)sizeForContentString:(NSString *)string;

@end
