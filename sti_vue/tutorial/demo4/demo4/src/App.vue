<template>
  <h1>{{ title }}</h1>
  <p>Welcome...</p>
  <div v-if="showModal">
    <Modal theme="dfsale" @close="toggleModal" >
      <h1>Ninja Giveaway!!</h1>
      <p>Grab your ninja swag for half price!</p>
    </Modal>
  </div>
  <button @click="toggleModal">open modal</button>
</template>

<script>
import Modal from './components/Modal.vue'

export default {
  name: 'App',
  components: { Modal },
  data() {
    return {
      title: 'My first Vue App :))',
      header: 'Sign up for the Giveaway!!',
      text: 'Grab your ninja swag for half price!',
      showModal: false,
    }
  },
  methods: {
    toggleModal() {
      this.showModal = !this.showModal

    }
  }
}
</script>

<style>
#app {
  font-family: Avenir, Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
h1 {
  border-bottom: 1px solid #ddddff;
  display: inline-block;
  padding-bottom: 10px;
}
.modal.sale {
  background: crimson;
  color: white;
}
.modal.sale h1 {
  color: white;
}
</style>
