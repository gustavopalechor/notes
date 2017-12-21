var Xw = 700
var Yw = 450




function cambia(c) {
      return [Xw + c[0], Yw - c[1]

}


function main() {
    var lienzo = document.getElementById("cloth").getContext("2d")

    var centro = cambia([0,0])

    lienzo.beginPath()
    lienzo.arc(centro[0], centro[1], 50-10, 0, 2 * Math.PI, false)
    lienzo.fillStyle = "green"
    lienzo.stroke()

    lienzo.arc([centro[])
    t
}
