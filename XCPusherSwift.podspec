Pod::Spec.new do |s|
  s.name             = 'XCPusherSwift'
  s.version          = '10.1.1-xc14-2'
  s.summary          = 'A Pusher client library in Swift'
  s.homepage         = 'https://github.com/pusher/pusher-websocket-swift'
  s.license          = 'MIT'
  s.author           = { "Pusher Limited" => "support@pusher.com" }
  s.source           = { git: "https://github.com/beMappy/PusherSwift.git", tag: s.version.to_s }
  s.social_media_url = 'https://twitter.com/pusher'

  s.swift_version = '5.0'
  s.requires_arc  = true
  s.vendored_frameworks = 'PusherSwift.xcframework'

  s.dependency 'XCTweetNacl', '1.0.2-xc14-2'
  s.dependency 'XCNWWebSocket', '0.5.2-xc14-2'

  s.ios.deployment_target = '13.0'
  s.osx.deployment_target = '10.15'
  s.tvos.deployment_target = '13.0'
end
