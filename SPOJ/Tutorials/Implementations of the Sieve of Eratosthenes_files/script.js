function decrypt(s) {
	var r = '';
	for(var i = 0; i < s.length; i++) {
		r += String.fromCharCode(s.charCodeAt(i) - 3);
	}
	return r;
}

function melMe() {
	var a = "pdlowr=";
	var b = "frpsrdvvr";
	var c = "@";
	var d = "iuhh1iu";
	var e = decrypt(a + b) + c + decrypt(d);
	location.href = e;
}

function openModal(modalId) {
	document.getElementById(modalId).style.visibility = "visible";
}
function closeModal(modalId) {
	document.getElementById(modalId).style.visibility = "hidden";
}