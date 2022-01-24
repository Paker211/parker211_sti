const app = Vue.createApp({
  data() {
    return {
      showBooks: true,
      books: [
        { title: 'Name of the wind', author:'Pateick Rothfuss', age:50, img:'./Picture/1.jpeg', isFav:true },
        { title: 'The way of kings', author:'Brandon Sanderson', age:39, img:'./Picture/2.jpeg', isFav:false },
        { title: 'The final empire', author:'Brandon Sanderson', age:39, img:'./Picture/3.jpeg', isFav:true },
      ]
    }
  },
  methods: {
    toggleShowBooks(){
      this.showBooks = !this.showBooks
    },
    toggleFav(ev, book) {
      book.isFav = !book.isFav
    },
  },
  computed: {
    filteredBooks() {
      return this.books.filter((book) => book.isFav)
    }
  }


})


app.mount('#app')
