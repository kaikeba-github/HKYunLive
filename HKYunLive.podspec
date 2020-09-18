#
# Be sure to run `pod lib lint HKYunLive.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'HKYunLive'
  s.version          = '0.1.0'
  s.summary          = 'HKYunLive Components'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
 HKYunLive Components frameworks for application
                       DESC

  s.homepage         = 'https://www.kaikeba.com'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'futao' => 'tfu@gaoxiaobang.com' }
  s.source           = { :git => 'https://github.com/kaikeba-github/HKYunLive.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'
  if s.respond_to? 'swift_version'
    s.swift_version = "5.0"
  end

  s.source_files = 'HKYunLive/Classes/**/*'
  s.vendored_frameworks = "HKYunLive/Frameworks/HKYunLive.framework"
  s.vendored_frameworks = "HKYunLive/Frameworks/HKYunLiveDataLayerLibrary.framework"
  s.vendored_frameworks = "HKYunLive/Frameworks/HKYunLiveIM.framework"
  s.vendored_frameworks = "HKYunLive/Frameworks/KKBCCLive.framework"
  
  # s.resource_bundles = {
  #   'HKYunLive' => ['HKYunLive/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  s.dependency 'HKYunSDK' #工程依赖的第三方库
  s.dependency 'CCLivePlaySDK' #CC
  s.dependency 'TXIMSDK_iOS' #hkyunlive_pods
end
