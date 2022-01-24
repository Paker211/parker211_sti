const app = Vue.createApp({
  data() {
    return {
      showBooks: true,
      title: 'The final Empire new',
      author: 'Peter Jason',
      age: 21,
      x: 0,
      y: 0,
    }
  },
  methods: {
    toggleShowBooks(){
      this.showBooks = !this.showBooks

    },
    handleEvent(ev, data) {
      console.log(ev, ev.type)
      if(data){
        console.log('5')
      }

    },
    handleMousemove(ev) {
      this.x = ev.offsetX
      this.y = ev.offsetY

    }

  },


})


app.mount('#app')
