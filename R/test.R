#' @useDynLib pointerTest



getPointer<-function(){
  .Call("test")
}


.pointer=setClass(
  Class="pointer",
  slots = c(pointer="ANY")
)


#p=.pointer(pointer=getPointer())
