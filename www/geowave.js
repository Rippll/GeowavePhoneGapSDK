var Geowave = function() {};

Geowave.prototype.initWithAppID = function(successCallback, failureCallback, appID) {
    cordova.exec(successCallback, failureCallback, "GeowavePlugin", "initWithAppID", [{appID: appID}]);
};

Geowave.prototype.initWithAppIDAndSenderID = function(successCallback, failureCallback, appID, senderID) {
    cordova.exec(successCallback, failureCallback, "GeowavePlugin", "initWithAppIDAndSenderID", [{appID: appID, senderID: senderID}]);
};

Geowave.prototype.requestLocationAuthorization = function(successCallback, failureCallback) {
    cordova.exec(successCallback, failureCallback, "GeowavePlugin", "requestLocationAuthorization", []);
};

Geowave.prototype.requestNotificationsAuthorization = function(successCallback, failureCallback) {
    cordova.exec(successCallback, failureCallback, "GeowavePlugin", "requestNotificationsAuthorization", []);
};

module.exports = new Geowave();