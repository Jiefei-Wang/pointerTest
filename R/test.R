#' @useDynLib pointerTest, .registration = TRUE


getPointer<-function(){
  .Call(.test)
}


.pointer=setClass(
  Class="pointer",
  slots = c(pointer="ANY")
)


#p=.pointer(pointer=getPointer())
