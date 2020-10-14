// Tencent is pleased to support the open source community by making TNN available.
//
// Copyright (C) 2020 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
// https://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

#import <UIKit/UIKit.h>

@interface UIColor (Utility)
+ (UIColor *)colorWithHexNumber:(NSUInteger)hexColor;
+ (UIColor *)colorWithHexNumber:(NSUInteger)hexColor alpha:(CGFloat)alpha;

- (BOOL)isDarkColor;
- (BOOL)isBlackOrWhite;
- (BOOL)isDistinct:(UIColor *)color;
- (UIColor *)colorWithMinimumSaturation:(CGFloat)minSaturation;
- (BOOL)isContrastingColor:(UIColor *)color;

- (UIColor *)darken;
- (UIColor *)darken:(CGFloat)percentage;
- (UIColor *)lighten;
- (UIColor *)lighten:(CGFloat)percentage;
@end