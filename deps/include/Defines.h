/*
Copyright (C) 2014 Reed Weichler

This file is part of Cylinder.

Cylinder is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Cylinder is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Cylinder.  If not, see <http://www.gnu.org/licenses/>.
*/

#import <UIKit/UIKit.h>
#import <substrate.h>

#define CLLog(format, ...) NSLog(@"Cylinder: %@", [NSString stringWithFormat:format, ##__VA_ARGS__])
#define Log CLLog

#define SCREEN_SIZE UIScreen.mainScreen.bounds.size

#define PrefsEffectKey @"effect"
#define PrefsEffectDirKey @"effectFolder"
#define PrefsFormulaKey @"formula"
#define PrefsSelectedFormulaKey @"selectedFormula"
#define PrefsEnabledKey @"enabled"
#define PrefsRandomizedKey @"randomized"

#define DEFAULT_EFFECT @"Cube (inside)"
#define DEFAULT_DIRECTORY @"rweichler"

#ifndef MAIN_BUNDLE
#define MAIN_BUNDLE ([NSBundle bundleForClass:NSClassFromString(@"CylinderSettingsListController")])
#endif
#define LOCALIZE(KEY, DEFAULT) [MAIN_BUNDLE localizedStringForKey:KEY value:DEFAULT table:@"CylinderSettings"]
#define SYSTEM_LOCALIZE(KEY) [[NSBundle bundleWithIdentifier:@"com.apple.UIKit"] localizedStringForKey:KEY value:@"" table:nil]

#define PREFS_PATH [NSString stringWithFormat:@"%@/Library/Preferences/com.r333d.cylinder.plist", @"/var/mobile"]

#define kCylinderSettingsChanged @"com.r333d.cylinder/settingsChanged"
#define kCylinderSettingsRefreshSettings @"com.r333d.cylinder/refreshSettings"

#define BUNDLE_PATH @"/Library/PreferenceBundles/CylinderSettings.bundle/"

#define kEffectsDirectory @"/Library/Cylinder"
#define kPacksDirectory @"/Library/Cylinder/Packs"
#define DEFAULT_EFFECTS [NSArray arrayWithObjects:[NSDictionary dictionaryWithObjectsAndKeys:DEFAULT_EFFECT, PrefsEffectKey, DEFAULT_DIRECTORY, PrefsEffectDirKey, nil], nil]
#define DEFAULT_FORMULAS [NSDictionary dictionary]
#define DefaultPrefs [NSMutableDictionary dictionaryWithObjectsAndKeys:DEFAULT_EFFECTS, PrefsEffectKey, DEFAULT_FORMULAS, PrefsFormulaKey, [NSNumber numberWithBool:YES], PrefsEnabledKey, [NSNumber numberWithBool:false], PrefsRandomizedKey, nil]
