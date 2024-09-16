//
//  ShakeDetektorIOS.swift
//  ShakeDetektorIOS
//
//  Created by Blaz Vantur on 11. 09. 24.
//

import Foundation
import UIKit

private var onShakeDetekted: (() -> Void)? = nil

@objc public class ShakeDetektorIOS: NSObject {

    @objc public func enableShakeDetektor(callback: @escaping @convention(block) () -> Void) {
        onShakeDetekted = callback
    }
}

extension UIWindow {
    open override func motionEnded(_ motion: UIEvent.EventSubtype, with event: UIEvent?) {
        super.motionEnded(motion, with: event)
        if motion == .motionShake {
            onShakeDetekted?()
        }
    }
}