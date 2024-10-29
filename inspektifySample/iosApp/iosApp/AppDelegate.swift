//
//  AppDelegate.swift
//  iosApp
//
//  Created by Blaz Vantur on 12. 10. 24.
//  Copyright © 2024 orgName. All rights reserved.
//

import UIKit
import ComposeApp

class AppDelegate: NSObject, UIApplicationDelegate {
    func application(
        _ application: UIApplication,
        configurationForConnecting connectingSceneSession: UISceneSession,
        options: UIScene.ConnectionOptions
    ) -> UISceneConfiguration {
        return InspektifyShortcutHandlerKt.getInspektifyUISceneConfiguration(configurationForConnectingSceneSession: connectingSceneSession)
    }
}
