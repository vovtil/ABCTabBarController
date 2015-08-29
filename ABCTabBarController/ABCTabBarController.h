// The MIT License (MIT)
//
// Copyright (c) 2015 FPT Software
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>
#import "MDTabBar.h"

@class ABCTabBarController;

@protocol ABCTabBarControllerDelegate <NSObject>
- (UIViewController *)tabBarViewController:(ABCTabBarController *)viewController viewControllerAtIndex:(NSUInteger)index;

@optional
- (void)tabBarViewController:(ABCTabBarController *)viewController didMoveToIndex:(NSUInteger)index;
@end

@interface ABCTabBarController : UIViewController

@property(nonatomic, strong) MDTabBar *tabBar;
@property(nonatomic, weak) id<ABCTabBarControllerDelegate> delegate;

- (void)setItems:(NSArray *)items;

@end