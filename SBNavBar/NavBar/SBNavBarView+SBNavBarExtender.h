//
//  SBNavBarView+SBNavBarExtender.h
//  SBNavBar
//
//  Created by Saiful Islam on 10/11/17.
//  Copyright © 2017 saiful. All rights reserved.
//


#import "SBNavBarView.h"

@interface SBNavBarView (SBNavBarExtender)


/**
 Configure the BarImage in this method for standard BarImages
 
 
 */
-(void)configureStandardBarImage;

-(void)standardNavTitle:(NSString *)titleText
     withBackBtnSeletor:(SEL)selector
      forViewController:(UIViewController *)vc;


@end
