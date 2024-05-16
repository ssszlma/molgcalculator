// list of atomic masses. now e.value = 1, then atomic mass = atomic_mass[e.value - 1] since it's zero indexed

atomic_mass = [1.008, 4.0026, 6.94, 9.0122, 10.81, 12.011, 14.007, 15.999, 18.998, 20.180, 22.990, 24.305, 26.982, 28.085, 30.974, 32.06, 35.45, 39.948, 39.0983, 40.078, 44.956, 47.867, 50.942, 51.996, 54.938, 55.845, 58.933, 58.693, 63.546, 65.38]

function getmoles(grams, mass) {
  return (grams / mass);
}

function getgrams(moles, mass) {
  return (moles * mass);
}

function find_value() {

  var atomic_number = document.getElementById("element").value;

  document.getElementById("moles").readOnly = false;
  document.getElementById("grams").readOnly = false;

  
  var m = document.getElementById("moles");
  var g = document.getElementById("grams");

  var k = 0.01;

  //var result;

if (m.readOnly == true && g.readOnly == false) { // m is being calculated, g is editable
  if (g.value == 0) {
    m.value == 0;
  }
} else { // g is being calculated, m is textbox
  if (m.value == 0) {
    g.value == 0;
  }
}

  if (m.value == 0 && g.value != 0) { // grams -> moles
    document.getElementById("moles").readOnly = true;
    document.getElementById("grams").readOnly = false;
    
    document.getElementById("moles").value = getmoles(g.value, atomic_mass[atomic_number - 1]) + k;
    
  } else if (g.value == 0 && m.value != 0) { // moles -> grams
    document.getElementById("grams").readOnly = true;
    document.getElementById("moles").readOnly = false;

    document.getElementById("grams").value = getgrams(m.value, atomic_mass[atomic_number - 1]) + k;

  }

}


